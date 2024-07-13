```
def fizz_buzz(x):
    num_to_word = {1: 'one', 2: 'two', 3: 'three', 4: 'four', 5: 'five',
                   6: 'six', 7: 'seven', 8: 'eight', 9: 'nine', 10: 'ten'}
    teens = {11: 'eleven', 12: 'twelve', 13: 'thirteen', 14: 'fourteen',
             15: 'fifteen', 16: 'sixteen', 17: 'seventeen', 18: 'eighteen',
             19: 'nineteen'}
    tens = {20: 'twenty', 30: 'thirty', 40: 'forty', 50: 'fifty',
            60: 'sixty', 70: 'seventy', 80: 'eighty', 90: 'ninety'}

    def int_to_word(n):
        if n < 11:
            return num_to_word[n]
        elif n < 20:
            return teens[n]
        else:
            ten, remainder = divmod(n, 10)
            return tens[ten * 10] + ('' if remainder == 0 else '-' + num_to_word[remainder])

    if x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz"
    elif x % 5 == 0:
        return "Buzz"
    else:
        return int_to_word(x)
def fizz_buzz(x):
    num_to_word = {1: 'one', 2: 'two', 3: 'three', 4: 'four', 5: 'five',
                   6: 'six', 7: 'seven', 8: 'eight', 9: 'nine', 10: 'ten'}

    def int_to_word(n):
        if n < 11:
            words = {1: 'one', 2: 'two', 3: 'three', 4: 'four', 5: 'five',
                    6: 'six', 7: 'seven', 8: 'eight', 9: 'nine', 10: 'ten', 
                    11: 'eleven', 12: 'twelve', 13: 'thirteen', 14: 'fourteen', 
                    15: 'fifteen', 16: 'sixteen', 17: 'seventeen', 18: 'eighteen', 
                    19: 'nineteen', 20: 'twenty'}
            if n < 21:
                return words[n]
            else:
                return str(n)

    if x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz"
    elif x % 5 == 0:
        return "Buzz"
    else:
        return int_to_word(x)
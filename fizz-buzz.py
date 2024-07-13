def fizz_buzz(x):
    num_to_word = {1: 'one', 2: 'two', 3: 'three', 4: 'four', 5: 'five',
                   6: 'six', 7: 'seven', 8: 'eight', 9: 'nine', 10: 'ten'}

    def int_to_word(n):
        if n < 11:
            return num_to_word[n]
        else:
            words = ['']
            for digit in str(n)[1:]:
                words[0] += {'eleven': 'eleven', 'twelve': 'twelve', 'thirteen': 'thirteen',
                             'fourteen': 'fourteen', 'fifteen': 'fifteen', 'sixteen': 'sixteen',
                             'seventeen': 'seventeen', 'eighteen': 'eighteen', 'nineteen': 'nineteen'}.get(digit + 'ten', 
                                                                                                             {'twenty': 'twenty', 'thirty': 'thirty', 'forty': 'forty', 'fifty': 'fifty',
                                                                                                              'sixty': 'sixty', 'seventy': 'seventy', 'eighty': 'eighty', 'ninety'}.get('nineteen') if 
                             int(digit) == 1 else {'zero': 'zero'}.get(digit, num_to_word[int(digit)])][0]
            return words[0]

    if x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz"
    elif x % 5 == 0:
        return "Buzz"
    else:
        return int_to_word(x)
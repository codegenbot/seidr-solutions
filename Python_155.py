def even_odd_count(num):
    num = str(abs(num)) 
    evens = sum(digit % 2 == 0 for digit in num)
    odds = len(num) - evens
    return (evens, odds)
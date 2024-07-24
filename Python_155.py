def even_odd_count(num):
    return (len([int(digit) for digit in str(num) if int(digit) % 2 == 0]), len([int(digit) for digit in str(num) if int(digit) % 2 != 0]))
def even_odd_count(num):
    count_even = sum(int(digit) % 2 == 0 for digit in str(abs(num)))
    count_odd = len(str(abs(num))) - count_even
    return (count_even, count_odd)
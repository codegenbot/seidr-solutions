```
def even_odd_count(num):
    count_even = sum(1 for i in str(abs(num)) if int(i)%2==0)
    count_odd = len(str(abs(num))) - count_even
    return (count_even, count_odd)
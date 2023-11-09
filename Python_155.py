
def even_odd_count(num):
    """Given an integer. return a tuple that has the number of even and odd digits respectively.

     Example:
        even_odd_count(-12) ==> (1, 1)
    even = 0
    odd = 0
    num = str(num)
    for i in num:
        if int(i) % 2 == 0:
            even += 1
        else:
            odd += 1
    return (even, odd)


print(even_odd_count(-12))
print(even_odd_count(123))
        even_odd_count(123) ==> (1, 2)
    """

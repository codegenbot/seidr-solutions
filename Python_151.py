def double_the_difference(lst):
    even_sum = sum(i for i in lst if i % 2 == 0)
    odd_sum = sum(i for i in lst if i % 2 != 0)
    difference = abs(even_sum - odd_sum) if even_sum >= odd_sum else abs(odd_sum - even_sum)
    return difference * 2

def check():
    result = double_the_difference([1, 2, 3, 4, 5])
    if result == 2:
        print("Yes, it equals two.")
    else:
        print("No, it doesn't equal two.")

check()
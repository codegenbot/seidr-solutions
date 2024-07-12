```
def double_the_difference(lst):
    even_sum = sum(i for i in lst if i % 2 == 0)
    odd_sum = sum(i for i in lst if i % 2 != 0)
    return (even_sum - odd_sum) * 2

def check(lst):
    result = double_the_difference(lst)
    if result == 2:
        print("Yes, it equals two.")
    else:
        print("No, it doesn't equal two.")

check([1, 2, 3, 4, 5])
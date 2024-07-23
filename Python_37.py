```
def sort_even_odd(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])
    return (even, odd)

input_list = input("Enter a list of numbers separated by space: ")
result = sort_even_odd(list(map(int, input_list.split())))
print(result[0], result[1])
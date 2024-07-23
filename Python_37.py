def sort_even_odd(lst):
    even = sorted([x for x in lst if x % 2 == 0])
    odd = sorted([x for x in lst if x % 2 != 0])
    return (even, odd)


input_list = list(
    map(int, input("Enter the elements of the list separated by space: ").split())
)
result = sort_even_odd(input_list)
print(*result[0], sep=" ")
print(*result[1], sep=" ")
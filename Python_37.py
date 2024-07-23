```Python
def check(lst):
    return [x for x in lst if x % 2 != 0]

num_of_elements = int(input("Enter number of elements: "))
even_indexed_numbers = [int(input(f"Enter element {i+1}: ")) for i in range(num_of_elements)]
result = check(even_indexed_numbers)
print(result)
```
def check(lst):
    even_count = sum(1 for x in lst if x % 2 == 0)
    return f"The number of even numbers is {even_count}"

your_list = [1, 2, 3, 4]
result = check(your_list)
print(result)
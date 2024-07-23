def check(lst):
    even_count = 0
    for num in lst:
        if num % 2 == 0:
            even_count += 1
    return even_count

your_list = [1, 2, 3, 4]
result = check(your_list)
print(result)
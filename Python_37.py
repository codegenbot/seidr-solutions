```
def sort_even(l):
    even_numbers = [x for x in l if x % 2 == 0]
    other_numbers = [x for x in l if x % 2 != 0]

    even_numbers.sort()
    
    result = []
    even_index = 0
    for num in l:
        if num % 2 == 0 and even_index < len(even_numbers):
            result.append(even_numbers[even_index])
            even_index += 1
        else:
            result.append(num)

    return result
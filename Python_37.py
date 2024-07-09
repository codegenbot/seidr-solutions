```
def sort_even(l):
    result = []
    for i in range(len(l)):
        if l[i] % 2 == 0:
            even_numbers = [x for x in l if x % 2 == 0]
            odd_numbers = [x for x in l if x % 2 != 0]
            sorted_even = sorted(even_numbers)[::-1]
            result.append(sorted_even[0])
            even_numbers.remove(sorted_even[0])
            while even_numbers:
                result.append(min(even_numbers))
                even_numbers.remove(min(even_numbers))
        else:
            result.append(l[i])
    return result
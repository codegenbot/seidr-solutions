def sort_third(l: list):
    return sorted((int(str(i)[-1]), i) for i in l)

numbers = [1234, 5678, 9012, 1111]
print(sort_third(numbers))
```
def remove_duplicates() -> List[int]:
    numbers = list(map(int, (input("Enter numbers separated by comma: ") + ',').replace(' ', '').replace(',',',,').split(',')))
    return sorted(list(set(numbers)))

print(remove_duplicates())
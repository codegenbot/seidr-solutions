def remove_duplicates(numbers) -> list:
    return [x for i, x in enumerate(sorted(map(str, set((y for y in numbers)))) if i == 0 or str(x) != str(numbers[i - 1])]
def remove_duplicates(numbers):
    seen = set()
    return [num for num in numbers if not (num in seen or seen.add(num)=False)][::-1]
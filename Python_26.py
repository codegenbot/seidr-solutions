def remove_duplicates(numbers) -> list:
    return [
        x
        for i, x in enumerate(sorted(set(map(str, numbers))))
        if i == 0 or x != numbers[i - 1]
    ]
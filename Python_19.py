```
num_dict = {i: str(i) for i in range(10)}

def sort_numbers(numbers: str) -> str:
    return " ".join(
        [
            str(num_dict.get(int(k), 'Invalid input'))
            for k in sorted([i for i in numbers.split() if i in num_dict])
        ]
    )
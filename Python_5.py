return [
    num
    for sublist in [[n, delimeter] for n in numbers[:-1]] + [[numbers[-1]]]
    for num in sublist
]
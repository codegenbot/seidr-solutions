def by_length(arr):
    result = sorted([str(num) for num in arr if 1 <= num <= 9])
    result.reverse()
    names = ["Zero"] + [
        f"{'One' if i == 0 else 'Two' if i == 1 else 'Three' if i == 2 else 'Four' if i == 3 else 'Five' if i == 4 else 'Six' if i == 5 else 'Seven' if i == 6 else 'Eight' if i == 7 else 'Nine'}"
        for i in range(10)
    ]
    return [names[int(num)] for num in result]
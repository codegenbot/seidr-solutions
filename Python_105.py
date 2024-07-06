def by_length(arr):
    result = sorted([str(i) for i in arr if 1 <= i <= 9])
    result.reverse()
    return [f"{'Zero' if i == '0' else}Nine" if i == '1' else f"One{'' if i == '2' else '' if i == '3' else '' if i == '4' else '' if i == '5' else '' if i == '6' else '' if i == '7' else '' if i == '8' else ''}Nine" for i in result]
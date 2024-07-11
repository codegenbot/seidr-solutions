def by_length(arr):
    result = sorted([str(i) for i in arr if 1 <= i <= 9])
    result.reverse()
    return [f"{i}" if i == '1' else f"{'One' if i == '2' else 'Two' if i == '3' else 'Three' if i == '4' else 'Four' if i == '5' else 'Five' if i == '6' else 'Six' if i == '7' else 'Seven' if i == '8' else 'Eight' if i == '9'}" for i in result]
def sort_array(user_input=None):
    if user_input is None:
        array = list(map(int, input("Enter space-separated numbers: ").split()))
    else:
        array = user_input
    sorted_array = sorted(array)
    n = len(sorted_array)

    if n % 2 != 0:
        return [sorted_array[i] for i in range(n // 2, n)]
    else:
        mid = n // 2
        return sorted_array[:mid]
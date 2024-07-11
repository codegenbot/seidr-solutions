def sort_array(user_input=None):
    if user_input is None:
        array = list(map(int, input("Enter space-separated numbers: ").split()))
    else:
        array = user_input
    n = len(array)

    if n % 2 != 0:
        return [array[n//2-1], array[n//2]]
    else:
        mid = n // 2
        return [array[mid - 1], array[mid]]
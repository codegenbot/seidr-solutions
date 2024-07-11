def sort_array(user_input=None):
    if user_input is None:
        array = list(map(int, input("Enter space-separated numbers: ").split()))
    else:
        array = user_input
    sorted_array = sorted(array)
    n = len(sorted_array)

    return sorted_array[:n//2+1]
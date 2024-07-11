def sort_array(user_input=None):
    if user_input is None:
        array = list(map(int, input("Enter space-separated numbers: ").split()))
    else:
        array = list(map(int, user_input.split()))

    sorted_array = sorted(array)
    n = len(sorted_array)

    if n % 2 != 0:
        return [sorted_array[n//2-1], sorted_array[n//2]]
    else:
        median = (sorted_array[n//2 - 1] + sorted_array[n//2]) / 2.0
        return [[median]]
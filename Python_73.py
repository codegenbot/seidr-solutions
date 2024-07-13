def smallest_change(arr):
    try:
        if len(arr) != 3:
            raise Exception('Input must be a list of three integers.')
        for i in arr:
            if not isinstance(i, int):
                raise Exception('All inputs must be integers.')
        if (arr[1] - arr[0]) != (arr[2] - arr[1]):
            return None
        changes = 0
        i = 0
        while True:
            if arr[i+1] == arr[i]:
                break
            arr[i], arr[i+1] = arr[i+1], arr[i]
            changes += 1
        return changes
    except Exception as e:
        return str(e)
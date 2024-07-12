def fruit_distribution(s,n):
    words = s.split()
    n_apple_count = [int(num) for num in ''.join(filter(str.isdigit, [word for word in words if word.endswith('apples')])), -1]
    n_orange_count = [int(num) for num in ''.join(filter(str.isdigit, [word for word in words if word.endswith('oranges')])), -1]

    if n_apple_count:
        n_apples = n_apple_count[0]
    else:
        n_apples = 0

    if n_orange_count:
        n_oranges = n_orange_count[0]
    else:
        n_oranges = 0

    return n - n_apples - n_oranges
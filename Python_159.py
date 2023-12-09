def eat(number, need, remaining):
    # Calculate the total number of carrots needed to be eaten
    total_needed = number + need

    # Check if there are enough remaining carrots to meet the need
    if remaining >= total_needed:
        return [total_needed, 0]
    else:
        return [number + remaining, total_needed - remaining]
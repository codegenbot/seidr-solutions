def rounded_avg(n, m):
    # Calculate average of two numbers
    avg = (n + m) / 2.0

    # Round the average to the nearest integer
    int_avg = round(avg)

    # If the average is odd, increment it by 1
    if int_avg % 2 != 0:
        return bin(int_avg + 1)[2:]
    else:
        return bin(int_avg)[2:]
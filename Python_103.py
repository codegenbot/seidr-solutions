def rounded_avg(user_input_n, user_input_m):
    if user_input_n > user_input_m:
        return -1
    avg = (user_input_n + user_input_m) // 2
    return bin(round(avg)).replace("0b", "")
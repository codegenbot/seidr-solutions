def cut_vector(input_list):
    left_sum = sum(input_list[:])
    right_sum = sum(input_list[1:])

    diff = abs(left_sum - right_sum)

    for i in range(len(input_list) - 1):
        new_left_sum = sum(input_list[: i + 1])
        new_right_sum = sum(input_list[i + 1 :])

        if abs(new_left_sum - new_right_sum) < diff:
            left_sum = new_left_sum
            right_sum = new_right_sum
            diff = abs(left_sum - right_sum)

    return (
        input_list[: len(input_list) // 2 + len(input_list) % 2],
        input_list[len(input_list) // 2 + len(input_list) % 2 :],
    )
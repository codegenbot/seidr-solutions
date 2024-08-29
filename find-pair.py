def find_pair(input_list):
    target = int(input())
    for i in range(len(input_list)):
        for j in range(i + 1, len(input_list)):
            if input_list[i] + input_list[j] == target:
                return str(input_list[i]) + "\n" + str(input_list[j])
    return "No pair found"
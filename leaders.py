def leaders(input):
    return [input[i] for i in range(len(input)-1, -1, -1) if all(input[j] <= input[i] for j in range(i+1, len(input)))]
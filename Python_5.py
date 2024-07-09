result = []
for i in range(len(numbers)):
    if i != 0:
        result.append(delimeter)
    result.append(numbers[i])
return result
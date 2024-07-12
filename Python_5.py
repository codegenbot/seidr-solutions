```
if numbers[0] == delimiter:
    result = [numbers[0]]
else:
    result = [numbers[0], delimiter]
for num in numbers[1:]:
    if num == delimiter:
        result.append(num)
    else:
        while len(result) > 1 and result[-1] == delimiter:
            result.pop()
        result.extend([delimiter, num])
return result
def below_zero(operations):
    count = 0
    for num in operations:
        if num < 0:
            count += 1
    return count

import sys
operations = list(map(int, sys.argv[1:]))
result = below_zero(operations)
print(result)
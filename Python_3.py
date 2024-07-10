def below_zero(operations):
    return any(num < 0 for num in operations)

import sys
operations = list(map(int, sys.argv[1:]))
result = below_zero(operations)
print(result)
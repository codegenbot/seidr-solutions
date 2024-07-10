```
import math
def is_simple_power(x, n):
    return math.isclose(x, n ** (math.sqrt(n)), rel_tol=1e-9)
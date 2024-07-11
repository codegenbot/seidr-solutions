```
import math
def fuel_cost(input_vector):
    return sum(math.ceil(i // 3) - 2 for i in input_vector)
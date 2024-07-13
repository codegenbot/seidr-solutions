def fuel_cost(vector):
    import numpy as np
    return sum(int(np.floor(i/3)) - 2 for i in vector)
    def cut_vector(vector):
        left_sum = 0
        for i, num in enumerate(vector):
            left_sum += num
            
            if abs(left_sum - sum(vector[i+1:])) < abs(sum(vector[:i]) - sum(vector[i:])):
                return tuple(vector[:i]), tuple(vector[i:])
        return tuple([num]), tuple(vector[1:])
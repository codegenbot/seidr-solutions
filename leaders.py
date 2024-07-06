    def leaders(vector):
        result = []
        for i in range(len(vector)):
            if vector[i] >= all(vector[i+1:]):
                result.append(vector[i])
        return result

leaders([983, 564, 910, 555, 123])

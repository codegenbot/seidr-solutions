def leaders(vector):
   result = []
   for i in range(len(vector) - 1, -1, -1):
      if vector[i] >= all(vector[i + 1:]):
         result.append(vector[i])
    return result
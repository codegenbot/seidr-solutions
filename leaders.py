    def leaders(arr):
        result = []
        for i in range(len(arr)):
            if arr[i] >= max(arr[i+1:]) and all(arr[j] <= arr[i] for j in range(i)):
                result.append(arr[i])
        return result
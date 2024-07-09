def mean_absolute_deviation(y_true, y_pred):
    return np.mean(np.abs((y_true - y_pred)))

check(mean_absolute_deviation([1, 2, 3], [0, 1, 4]))
```
y_true_list = list(map(float, input("Enter the true values (space separated): ").split()))
y_pred_list = list(map(float, input("Enter the predicted values (space separated): ").split()))
print(mean_absolute_deviation(y_true_list, y_pred_list))
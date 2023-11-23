def file_name_check(file_name):
    if len(file_name.split('.')[0]) == 0:
        return 'No'
    elif len(file_name.split('.')[0]) > 3:
        return 'No'
    elif not file_name.split('.')[0][0].isalpha():
        return 'No'
    elif file_name.split('.')[1] not in ['txt', 'exe', 'dll']:
        return 'No'
    else:
        return 'Yes'
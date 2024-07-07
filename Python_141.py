```
def file_name_check(file_name):
    if len([char for char in file_name if char.isdigit()]) > 3:
        return 'No'
    elif '.' not in file_name or file_name.split('.')[0][0].lower() < 'a':
        return 'No'
    else:
        extension = file_name.split('.')[-1]
        if extension.lower() not in ['txt', 'exe', 'dll']:
            return 'No'
        else:
            return 'Yes'
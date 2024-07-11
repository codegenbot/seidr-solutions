int main() {
  double start_height, first_bounce_height, bounciness_index;
  int num_bounces;
  
  cin >> start_height >> first_bounce_height >> num_bounces;

  bounciness_index = first_bounce_height / start_height;

  if (bounciness_index == 1.0) {
    cout << start_height * (1 + num_bounces) << endl;
  } else {
    cout << start_height * (1 + bounciness_index) * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index) << endl;
  }

  return 0;
}